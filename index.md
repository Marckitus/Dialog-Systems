## Dialog Systems

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

# Dialog Systems
## Personal Research into video games Dialog Systems

Dialog Systems have been an essential part in many video games for decades, they vary in form and use but lots of games have a unique flavor thanks to a well designed, written and adequate dialog system implementation.

In this blog you will find the different types of dialog systems that exist and what are their pros and cons, with code examples to build one for your games.

### Origin

ELIZA is a computer program that was developed from 1964 to 1966 and simulated a therapist whom you could interact with. This was the pioneer of dialog systems, and ever since its release developers have added with more or less grace interactions with NPCs to add more inmersion in their games.

_A conversation with Eliza from [Wikipedia](https://en.wikipedia.org/wiki/ELIZA)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/ELIZA.png)

Depending on the approach of the game the player will interact in different ways with NPCs, on modern games there usually are some sort of interaction with them but the difficulty comes from giving the player the illusion of freedom while developing a natural driven story.
Now we are going to classify them based on the level of interaction player-NPC, and how the game shows these interactions.

# Non-Branching Dialog
Non-branching dialog is the simplest interaction, when a conversation triggers, via the player talks to an NPC or an event starts and the NPC says his lines and ends the interaction. The NPC can have multiple dialogs depending on multiple factors such as: how many times you have talked to him, if some events in the game have already happened, you have an special item, if the player has died recently, etc. This method gives the player only one choice, talking or not with an NPC. It's easier to implement than the others and does not require a lot of work but lacks from interaction with the player making them feel like they have no voice.

We can see an example of this type of interaction in the majority of the pokemon franchise, in this example the trigger is talking to another pokemon trainer, the NPC delivers his lines, and starts the combat, at the end of the combat he say something else, and if you talk to him again after the battle this NPC says another set of lines and does not start a combat.

_Pokemon Gold/Silver (1999)_

![](https://github.com/Marckitus/Personal_Research_Dialog_Systems/blob/main/Docs/non_branched/non_branched_pokemon.gif)
