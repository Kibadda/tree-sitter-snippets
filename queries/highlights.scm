(snippet) @text.title

[
  (insert_node)
  (default_node)
  (function_node)
  (choice_node)
] @punctuation

(text) @string

trigger: (string) @text.uri

description: (string) @string

index: (number) @parameter

content: (string) @parameter

content: (choices (string) @parameter)

(eval) @keyword
