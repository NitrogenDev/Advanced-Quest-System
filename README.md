
![Nitrogen](https://user-images.githubusercontent.com/44950964/90797265-1852f980-e319-11ea-9fb7-75ca65154392.png)

  
  

# Advanced Quest System

  

Dynamic event-driven quest system made using Unreal Engine 4 (version 4.25).

  

![Showcase](Images/Showcase.gif)

  

## Table of Contents (Optional)

  

-  [Setup](#setup)

	-  [Blueprint implementation](#blueprint-implementation)

	-  [C++ implementation](#c-implementation)

-  [Features](#features)

-  [Support](#support)

-  [Donations](#donations)

-  [License](#license)
  
## Setup

**Prerequisites**

* Unreal Engine 4

Clone this repository to your local machine using `https://github.com/NitrogenDev/Advanced-Quest-System-UE4`.

Open `QuestSystem.uproject`. If you're prompted for a version, I suggest using **4.25**.

### Blueprint implementation

1. Migrate the code from the original project to your project
2. In your character class, add the `Quest_Component` component
3. Copy and paste the code and variables related to the quest system from the `ThirdPersonCharacter` class from the original project
4. Replace all casts to the `ThirdPersonCharacter` class with a cast to your character class.

### C++ implementation

Migration currently in progress.

## Features

* Easy-to-use API, which can easily be expanded further.

* Event-driven quest completion.

* Interaction with the other parts of the system is done through event dispatchers.

* Dynamically add per-NPC quests with any amount of steps, even at runtime.

* Quest updates notifications.

* When the game is stopped, everything related to the questing and NPC system is saved. **This also happens when an actor of type `ThirdPersonCharacter` or `NPC_Quest`is destroyed.**

  

## Support

  

Reach out to me at one of the following places!

  

-  <a  href="https://www.youtube.com/c/nitrogendev"  target="_blank">`YouTube`</a>

  

- Twitter at <a  href="https://twitter.com/nitrogendev"  target="_blank">`@NitrogenDev`</a>

  

- Reddit at <a  href="https://www.reddit.com/user/nitrogenlive"  target="_blank">`u/nitrogenlive`</a>

## Donations

  

- Support my work on **<a href="https://www.patreon.com/NitrogenDev"  target="_blank">Patreon</a>**.

## License

  

-  **[MIT license](http://opensource.org/licenses/mit-license.php)**

  

- Copyright 2020 © **<a href="https://www.youtube.com/c/nitrogendev"  target="_blank">Nitrogen</a>**.