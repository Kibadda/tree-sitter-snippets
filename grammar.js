module.exports = grammar({
  name: 'snippets',

  rules: {
    snippets: ($) => repeat($._node),

    _node: $ => choice(
      $.comment,
      $.snippet,
    ),

    comment: _ => token(prec(-10, /#.*/)),

    snippet: $ => seq(
      'snippet ',
      field('trigger', alias(/\S+/, $.string)),
      optional(seq(
        /\s/,
        field('description', alias(/"[^"\n]+"/, $.string)),
      )),
      '\n',
      field('body', $.snippet_body),
    ),

    snippet_body: $ => repeat1(choice(
      $.insert_node,
      $.choice_node,
      $.default_node,
      $.function_node,
      $.eval,
      $.text,
    )),

    eval: $ => seq(
      '`',
      optional(seq(
        '!',
        field('language', alias(/\w+/, $.string)),
        ' ',
      )),
      field('command', alias(/[^!][^`]+/, $.string)),
      '`',
    ),

    text: _ => token(prec(-10, /[^\$\r\n`]*/)),

    insert_node: $ => seq(
      '$',
      field('index', alias(/\d+/, $.number)),
    ),

    default_node: $ => seq(
      '${',
      field('index', alias(/\d+/, $.number)),
      ':',
      field('content', alias(choice(
        '${VISUAL}',
        /[^}]+/,
      ), $.string)),
      '}',
    ),

    choice_node: $ => seq(
      '${',
      field('index', alias(/\d+/, $.number)),
      '|',
      field('content', $.choices),
      '}',
    ),

    choices: $ => seq(
      alias(/[^,}]+/, $.string),
      repeat(seq(',', alias(/[^,}]+/, $.string))),
    ),

    function_node: $ => seq(
      '${',
      field('index', alias(/\d+/, $.number)),
      field('content', alias(/[^\|:][^}]+/, $.string)),
      '}',
    ),
  },
});
