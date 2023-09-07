; highlights.scm

[
 "If"
 "While"
 "ForeachTitan"
 "ForeachPlayer"
] @keyword

(comment) @comment
(boolean_literal) @boolean
(number_literal) @number
(string_literal) @string
(expression function: (identifier) @function)
(field_expression field_identifier: (identifier) @function)
(event_definition identifier: (identifier) @function)
(field_expression identifier: (identifier) @type)
[ ";" "," "." ] @delimiter
[ "(" ")" "[" "]" "{" "}" ] @punctuation.bracket
