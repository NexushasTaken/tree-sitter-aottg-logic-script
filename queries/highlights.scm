; highlights.scm

(comment) @comment
(boolean_literal) @boolean
(number_literal) @number
(string_literal) @string
(call_expression function: (identifier) @function)
(field_expression field: (identifier) @function)
(field_expression argument: (identifier) @type)
[ ";" "," "." ] @delimiter
[ "(" ")" "[" "]" "{" "}" ] @bracket
