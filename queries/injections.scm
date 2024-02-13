(eval
  !language
  command: (string) @injection.content (#set! injection.language "vim"))

((eval
  language: (string) @language
  command: (string) @injection.content (#set! injection.language "lua"))
  (#any-of? @language "lua" "l"))
