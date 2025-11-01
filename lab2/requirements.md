# Main FNAF System Requirements

## Functional Requirements

### The system shall allow the player to manage security systems to survive
- includes: monitoring surveillance cameras.
- includes: using audio devices to distract enemies.
- includes: sealing ventilation shafts to block paths.
### The system shall provide the ability to repair malfunctioning systems
- includes: restarting the audio system.
- includes: restarting the video system.
- includes: repairing the ventilation system.
- extends: option for a full reboot of all systems simultaneously(takes same amount of time as repairing two systems separateble)
### The system shall simulate a total power outage
- includes: requiring the player to physically go to the generator room.
- includes: manual restart of the generator to restore power.
### The system shall control the main antagonist (Springtrap) that actively hunts the player
- includes: moving between locations.
- includes: reacting to audio lures created by the player.
- includes: using vents as an alternative path.
- extends: ability to disable the power generator to create a crisis.
### The system shall trigger phantom attacks to sabotage and distract the player
- includes: sudden appearances on cameras or in the office.
- extends: causing malfunctions in one of the core systems (audio, video, ventilation).
### The system shall define the conditions for ending a game session
- includes: a game over state if the Springtrap attacks the player.
- includes: a win state if the player survives until the end of the shift.
### The system shall provide the player with guidance and narrative information
- includes: playing receiving phone call from "PhoneGuy" at the start of shift

## Non-Functional Requirements
### The system shall maintain stable performance
#### Minimum system requirements:
- OS: Windows XP, Vista, Windows 7
-   Processor: 2 GHz Intel Pentium 4 or AMD Athlon or equivalent
-   Memory: 1 GB RAM
-    Graphics: 1 GB graphics card
-    DirectX: Version 9.0
-    Storage: 500 MB available space
   
- The game must run at a consistent frame rate (minimum 24 FPS) to ensure a smooth player experience.
- The game must support modern architecture and be updated if needed.
- The game must run at a consistent frame rate (minimum 24 FPS) to ensure a smooth player experience.
### The system shall have an good user interface
- Controls for switching cameras, using audio, and accessing the maintenance panel must be clear and responsive, should not exceed 1 second.
- The interface shall support adjustable font sizes or color schemes, or different type of things for users with visual impairments
### The system's AI
- Should work correctly, increasing difficulty relative to game timeэ
- Player-Relative Scaling: The AI's difficulty shall also dynamically adjust based on player performance
### Security
- The system must be protected against common vulnerabilities
- The system shall implement anti-cheat measures to detect and prevent unauthorized modifications to the game state.
- Data such as in-game saves must be securely stored to avoid file corruption.
