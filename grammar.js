module.exports = grammar({
  name: "kpops",

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ =>
      choice(
        $.variable
      ),

    identifier: _ => /[a-z][_a-z0-9]+/,

    namespace: $ => $.identifier,
    property_deref: _ => ".",
    property: $ => $.identifier,

    variable_content: $ => seq(
          $.namespace,
          optional(repeat(seq($.property_deref ,choice($.property, $.variable))))
        ),
    variable: $ =>
      seq(
        "$",
        "{",
        $.variable_content,
        "}",
      ),
  },
});
