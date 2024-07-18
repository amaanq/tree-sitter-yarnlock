import XCTest
import SwiftTreeSitter
import TreeSitterYarnlock

final class TreeSitterYarnlockTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_yarnlock())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Yarnlock grammar")
    }
}
