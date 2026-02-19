[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=22660613

Custom Pet: Parrot
------------------

This repository includes a custom `Parrot` pet. The `Parrot` class extends `Pet` and adds a `vocabularySize` property representing how many words the parrot can mimic.

- What it can do: The parrot overrides `makeSound()` to "squawk and mimic words" and `printInfo()` to display its vocabulary size. It also supports standard `Pet` features (name, age, hunger level) via inheritance.
- Implementation details: `Parrot` provides constructors, getters/setters (with validation), and demonstrates polymorphism through virtual methods declared in `Pet`.
- Challenge implemented: I implemented the parrot-mimic challenge — adding a new derived class with extra state (`vocabularySize`), overriding virtual behavior, and ensuring proper encapsulation and constructors.

Other pets in this project:
- `Dog`: has a `breed` field and overrides `makeSound()` to bark.

See the source files for details: `Pet.h` / `Parrot.h` / `Dog.h`.

