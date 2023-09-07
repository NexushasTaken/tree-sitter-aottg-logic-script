; highlights.scm

(comment) @comment
(boolean_literal) @boolean
(number_literal) @number
(string_literal) @string
(field_expression argument: (identifier) @type)
(field_expression field: (identifier) @function)
(event_definition identifier: (identifier) @function)
(call_expression function: (identifier) @function)
(call_expression function: (identifier) @keyword
  (#any-of? @keyword
    "If"
    "While"
    "ForeachPlayer"
    "ForeachTitan"
   ))
[ ";" "," "." ] @delimiter
[ "(" ")" "[" "]" "{" "}" ] @bracket
