package tree_sitter_yarnlock_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_yarnlock "github.com/amaanq/tree-sitter-yarnlock/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_yarnlock.Language())
	if language == nil {
		t.Errorf("Error loading Yarnlock grammar")
	}
}
