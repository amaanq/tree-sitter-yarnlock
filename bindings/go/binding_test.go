package tree_sitter_yarnlock_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-yarnlock"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_yarnlock.Language())
	if language == nil {
		t.Errorf("Error loading Yarnlock grammar")
	}
}
