module.exports = grammar({
  name: 'twig',

  rules: {
    template: $ => repeat(choice(
      $.directive,
      $.output_directive,
      $.comment_directive,
      $.content,
    )),

    code: $ => repeat1(/[^%-~]+|[%-~]/),

    content: $ => prec.right(repeat1(/[^\{]+|\{/)),

    directive: $ => seq(
      choice('{%', '{%-', '{%~'),
      $.code,
      choice('%}', '-%}', '~%}'),
    ),

    output_directive: $ => seq(
      choice('{{', '{{-', '{{~'),
      $.code,
      choice('}}', '-}}', '~}}'),
    ),

    comment_directive: $ => seq(
      '{#',
      /([^#]|[\r\n]|(#+([^#}]|[\r\n])))*#+/,
      '}',
    ),
  }
});
