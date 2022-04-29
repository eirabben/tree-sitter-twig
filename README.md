# tree-sitter-twig

Twig grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Use with nvim-treesitter

To use this grammar with nvim-treesitter, add this to your nvim config after `require('nvim-treesitter.configs').setup()`:

```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.twig = {
  install_info = {
    url = "eirabben/tree-sitter-twig",
    files = {"src/parser.c", "src/scanner.cc"},
    branch = "main",
  },
  filetype = "twig",
}
```

Then, to activate highlighting, copy `queries/highlights.scm` and `queries/injections.scm` into your `[nvim-config]/after/queries/twig`.
