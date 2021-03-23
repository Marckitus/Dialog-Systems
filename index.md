## Dialog Systems

## Personal Research into video games Dialog Systems

Dialog Systems have been an essential part in many video games for decades, they vary in form and use but lots of games have a unique flavor thanks to a well designed, written and adequate dialog system implementation.

In this blog you will find the different types of dialog systems that exist and what are their pros and cons, with code examples to build one for your games.

### Origin

ELIZA is a computer program that was developed from 1964 to 1966 and simulated a therapist whom you could interact with. This was the pioneer of dialog systems, and ever since its release developers have added with more or less grace interactions with NPCs to add more inmersion in their games.

_A conversation with Eliza from [Wikipedia](https://en.wikipedia.org/wiki/ELIZA)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/ELIZA.png)

Depending on the approach of the game the player will interact in different ways with NPCs, on modern games there usually are some sort of interaction with them but the difficulty comes from giving the player the illusion of freedom while developing a natural driven story.
Now we are going to classify them based on the level of interaction player-NPC, and how the game shows these interactions.

### Non-Branching Dialog
Non-branching dialog is the simplest interaction, when a conversation triggers, via the player talks to an NPC or an event starts and the NPC says his lines and ends the interaction. The NPC can have multiple dialogs depending on multiple factors such as: how many times you have talked to him, if some events in the game have already happened, you have an special item, if the player has died recently, etc. This method gives the player only one choice, talking or not with an NPC. It's easier to implement than the others and does not require a lot of work but lacks from interaction with the player making them feel like they have no voice.

We can see an example of this type of interaction in the majority of the pokemon franchise, in this example the trigger is talking to another pokemon trainer, the NPC delivers his lines, and starts the combat, at the end of the combat he say something else, and if you talk to him again after the battle this NPC says another set of lines and does not start a combat.

_Pokemon Gold/Silver (1999)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/non_branched/non_branched_pokemon.gif)

Another example of a non-branching dialog system are games from the franchise Final Fantasy, where almost all interactions with NPCs are railroaded and similar to cutscenes. In this example we can see the group talking around the fire and the player is just an expectator looking at the scene without interacting, nevertheless if the player is already engaged with the story and characters this system won't break the inmersion.

_Final Fantasy VII (1997)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/non_branched/non_branched_FFVII.gif)

The game with one of the greatest dialog systems of the last years is Hades, this rogelite makes talking to the same NPCs after every run fun, with a cast of characters with awesome design and narratives that won't repeat a single interaction with the player in 60 or more hours into the game, in Hades every time you die or finish a run Zagreus the protagonist returns to home an the player can decide to talk to the differents NPCs on the area and giving then presents, but when it comes to the dialog system it's just a non-branching dialog but with an incredible amount of options making it feel unique every time the player chooses to talk to someone, adding also that the cast of NPCs are reactive to how your last run whent. A perfect example of a non-branching dialog system at its brightest.
I also recommend this video that talks in profundity about this dialog system:
[The System Behind Hades Astounding Dialogue](https://www.youtube.com/watch?v=bwdYL0KFA_U)

_Hades (2018)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/non_branched/non_branched_hades.gif)

### Branching Dialog

Branching dialog systems have different paths the player can take making it more interactive, also the dialogues go forward and there’s usually no way for the player to change the responses or talk about the same topics.
Depth on this system can vary a lot, from yes and no options, to various responses containing multiples lines and games genres centred exclusively on the branching dialog system as gameplay and fundamental pillar of the game with minimal or any other gameplay feature, those game are usually called **Visual Novel** such as: a psychological horror game _[Doki Doki Literature Club!](https://store.steampowered.com/app/698780/Doki_Doki_Literature_Club/) (2017)_, a murder mystery game _[Danganronpa Trigger Happy Havoc](https://store.steampowered.com/app/413410/Danganronpa_Trigger_Happy_Havoc/) (2010)_ or a pidgeon dating sim _[Hatoful Boyfriend](https://store.steampowered.com/app/310080/Hatoful_Boyfriend/) (2011)_ are just some examples.

Some video games use this method to create a fake feeling of freedom by giving the player multiple choices that end on the same path creating an illusion to the player and lowering a lot the quantity of dialogue needed for the game.

As an example Persona 5 does this multiple times during the history adding maybe one line of reaction or changing nothing at all but making the player feel as part of the group and more immersed. But those fake choices will totally break that immersion if the player finds out, and they could not notice at first but if they replay the game the trick is obvious.

_Persona 5 Royal (2019)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/branced/branched_P5.png)

In some games the objective of the conversation can be improving the players relationship with the NPC, and the players try to find the “best” response to get more “friendly points” with that NPC, Persona 5 does this when the player decides to pass the morning or evening with a friend, another recent example is Haven that gives the player levels and abilities in regards how much the relationship between the two protagonist develops.

_Haven (2020)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/branced/branched_haven.gif)

There’s another approach to the branching dialog system that was more popular in the western, in games simulating roleplaying tabletop games, the player options are usually written word by word, the player know exactly how his avatar will respond but breaks the flow of the conversation taking a long time between response and response while the player reads the possible options and thinks which one to choose.

One example of this approach are the divinity original sin games, those of the player a vast diversity of answers depending on class, race, background, abilities and alignment. Letting the player’s character to act very differently depending on how the avatar is and past choices, but the conversations may take too long to the more casual audience.

_Divinity: Original Sin II (2017)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/branced/branched_divinity.png)

One little add-on that made the conversations feel more natural without long silences was implemented on Mass Effect, where the player could read the possible responses he had while the NPC was still talking, helping thus to follow the flow of a real conversation. But, at the same time making simpler options so the player had time to read them in time.

_Mass Effect (2007)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/branced/branched_mass_effect.jpg)

This concept has evolved during the years and we have seen the player responses shorten to the point it can be confusing and often the avatar will act differently from what the player expected based on the options he had, Fallout 4 was highly criticized for a poorly made and not intuitive dialog system where the options where too ambiguous and the player didn't know hot his character would act, leading to paths the players didn't intend to go.

_Fallout 4 (2015)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/branced/branched_fallout4.jpg)

There is also a mod that reveals all dialogue options before you choose.

_Fallout 4 (2015) [Fully Dialogue Interface](https://www.nexusmods.com/fallout4/mods/1235/?) mod. Image from [Polygon](https://www.polygon.com/fallout-4/2015/11/18/9756972/fallout-4-dialogue-mod-pc-xbox-playstation)._

![Image](/branced/branched_fallout4_mod.jpg)




You can use the [editor on GitHub](https://github.com/Marckitus/Personal_Research_Dialog_Systems/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/Marckitus/Personal_Research_Dialog_Systems/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
