# game-tempname

| Diagram Colors |
|--------|
| Violet: view info |
| Teal: menu |
| Blue: manage |
| Yellow: slection |
| Red: exit program |
| Green: unique/user input |
| Gray: go to previous menu |
| Brown: data report |
| Rose: narrative |

```mermaid
flowchart LR
    MAIN --> NewGame[New Game]
    MAIN --> Continue --> GAMEMENU[Game Menu]
    MAIN --> Quit

    NewGame --> INIT[creation & intro] --> GAMEMENU[Game Menu]

    GAMEMENU --> Explore
    GAMEMENU --> Datavault
    GAMEMENU --> Inventory
    GAMEMENU --> Harvest[Harvest/Work]
    GAMEMENU --> Factions
    GAMEMENU --> Party
    GAMEMENU --> SaveQuit[Save & Quit]

    Explore --> E1[Travel to location]
    Explore --> E2[Interact w/ characters]
    Explore --> E3[Investigate area]
    Explore --> E4[Back]

    Datavault --> D1[Read entries]
    Datavault --> D2[Quests]
    Datavault --> D3[Merge foreign datavault]
    Datavault --> D4[Send message]
    Datavault --> D5[Review family history]
    Datavault --> D6[Back]

    Inventory --> I1[View equipment]
    Inventory --> I2[View supplies]
    Inventory --> I3[Equip/unequip]
    Inventory --> I4[Drop item]
    Inventory --> I5[Back]

    Harvest --> H1[Gather resources]
    Harvest --> H2[Process materials]
    Harvest --> H3[Manage workers]
    Harvest --> H4[Investment & income]
    Harvest --> H5[Back]

    Factions --> F1[View known factions]
    Factions --> F2[Join/leave faction]
    Factions --> F3[Create faction]
    Factions --> F4[Manage faction]
    Factions --> F5[Back]

    Party --> P1[View members]
    Party --> P2[Assign roles]
    Party --> P3[Manage supplies]
    Party --> P4[Manage holdings]
    Party --> P5[Dismiss worker]
    Party --> P6[Back]


    class P1,F1,D1,I1,I2,D5 violet
    class D2,MAIN,GAMEMENU,Inventory,Explore,Datavault,Party,Factions,Harvest teal
    class P3,P4,F4,H3 blue
    class P5,P2,F2,I3,I4,E1,E2,E3,D3,D4 yellow
    class Quit,SaveQuit red
    class H1,H2,F3 green
    class E4,D6,I5,H5,F5,P6 gray
    class H4 brown
    class INIT rose


classDef violet   fill:#5C4FC7,color:#fff,stroke:#4438a8
classDef teal     fill:#1A9E75,color:#fff,stroke:#127a5a
classDef blue    fill:#3A7BD5,color:#fff,stroke:#2a5fa8
classDef yellow    fill:#D4820A,color:#fff,stroke:#a86408
classDef red  fill:#C0392B,color:#fff,stroke:#922b21
classDef green   fill:#2E7D32,color:#fff,stroke:#1b5e20
classDef gray     fill:#5F6368,color:#fff,stroke:#3d4043
classDef brown   fill:#A0522D,color:#fff,stroke:#7a3d21
classDef rose     fill:#A0527A,color:#fff,stroke:#7a3d5c
```


