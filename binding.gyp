{
  "targets": [
    {
      "target_name": "tree_sitter_twig_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        "node_modules/tree-sitter-html/src/scanner.cc"
        # If your language uses an external scanner, add it here.
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
