# Cherry
A simple programming language written in C++, which syntax is similar to Java. 

#### Details
The purpose of the project is to track the development of the [Panda](https://github.com/Panda-Programming-Language/Panda) in C++.

#### Example
A simple example of printing the text in the console:

```java
public static void main() {
    System.log("Hello World");
}
```

#### Repository structure
```
Cherry/
+--exmaples/                 Example scripts written in Cherry
+--src/                      Modules and sources
   +--/cherry                Cherry module
   +--/cherry-core           Cherry Core module
+--tests/                    Sources of unit tests
+--CMakeLists.txt            CMake build
```

#### Features
- [x] Single-File loader for scripts with .cherry extension
- [ ] Language elements
  - [ ] Syntax
  - [ ] Structures
  - [ ] Standard library
- [ ] Interpreter
  - [ ] Lexer
  - [ ] Extractor
  - [ ] Parser
  - [ ] Analyzer
- [ ] Memory
- [ ] Runtime