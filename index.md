## Dialog Systems

## Personal Research into video games Dialog Systems

Dialog Systems have been an essential part in many video games for decades, they vary in form and use but lots of games have a unique flavor thanks to a well designed, written and adequate dialog system implementation.

In this blog you will find the different types of dialog systems that exist and what are their pros and cons, with code examples to build one for your games.

### Origin

ELIZA is a computer program that was developed from 1964 to 1966 and simulated a therapist whom you could interact with. This was the pioneer of dialog systems, and ever since its release developers have added with more or less grace interactions with NPCs to add more inmersion in their games.

_A conversation with Eliza from [Wikipedia](https://en.wikipedia.org/wiki/ELIZA)_

![Image](/Docs/ELIZA.png)

Depending on the approach of the game the player will interact in different ways with NPCs, on modern games there usually are some sort of interaction with them but the difficulty comes from giving the player the illusion of freedom while developing a natural driven story.
Now we are going to classify them based on the level of interaction player-NPC, and how the game shows these interactions.

### Non-Branching Dialog
Non-branching dialog is the simplest interaction, when a conversation triggers, via the player talks to an NPC or an event starts and the NPC says his lines and ends the interaction. The NPC can have multiple dialogs depending on multiple factors such as: how many times you have talked to him, if some events in the game have already happened, you have an special item, if the player has died recently, etc. This method gives the player only one choice, talking or not with an NPC. It's easier to implement than the others and does not require a lot of work but lacks from interaction with the player making them feel like they have no voice.

We can see an example of this type of interaction in the majority of the pokemon franchise, in this example the trigger is talking to another pokemon trainer, the NPC delivers his lines, and starts the combat, at the end of the combat he say something else, and if you talk to him again after the battle this NPC says another set of lines and does not start a combat.

_Pokemon Gold/Silver (1999)_

![Image](/Docs/non_branched/non_branched_pokemon.gif)

Another example of a non-branching dialog system are games from the franchise Final Fantasy, where almost all interactions with NPCs are railroaded and similar to cutscenes. In this example we can see the group talking around the fire and the player is just an expectator looking at the scene without interacting, nevertheless if the player is already engaged with the story and characters this system won't break the inmersion.

_Final Fantasy VII (1997)_

![Image](/Docs/non_branched/non_branched_FFVII.gif)

The game with one of the greatest dialog systems of the last years is Hades, this rogelite makes talking to the same NPCs after every run fun, with a cast of characters with awesome design and narratives that won't repeat a single interaction with the player in 60 or more hours into the game, in Hades every time you die or finish a run Zagreus the protagonist returns to home an the player can decide to talk to the differents NPCs on the area and giving then presents, but when it comes to the dialog system it's just a non-branching dialog but with an incredible amount of options making it feel unique every time the player chooses to talk to someone, adding also that the cast of NPCs are reactive to how your last run whent. A perfect example of a non-branching dialog system at its brightest.
I also recommend this video that talks in profundity about this dialog system:
[The System Behind Hades Astounding Dialogue](https://www.youtube.com/watch?v=bwdYL0KFA_U)

_Hades (2018)_

![Image](/Docs/non_branched/non_branched_hades.gif)

### Branching Dialog

Branching dialog systems have different paths the player can take making it more interactive, also the dialogues go forward and there’s usually no way for the player to change the responses or talk about the same topics.
Depth on this system can vary a lot, from yes and no options, to various responses containing multiples lines and games genres centred exclusively on the branching dialog system as gameplay and fundamental pillar of the game with minimal or any other gameplay feature, those game are usually called **Visual Novel** such as: a psychological horror game _[Doki Doki Literature Club!](https://store.steampowered.com/app/698780/Doki_Doki_Literature_Club/) (2017)_, a murder mystery game _[Danganronpa Trigger Happy Havoc](https://store.steampowered.com/app/413410/Danganronpa_Trigger_Happy_Havoc/) (2010)_ or a pidgeon dating sim _[Hatoful Boyfriend](https://store.steampowered.com/app/310080/Hatoful_Boyfriend/) (2011)_ are just some examples.

Some video games use this method to create a fake feeling of freedom by giving the player multiple choices that end on the same path creating an illusion to the player and lowering a lot the quantity of dialogue needed for the game.

As an example Persona 5 does this multiple times during the history adding maybe one line of reaction or changing nothing at all but making the player feel as part of the group and more immersed. But those fake choices will totally break that immersion if the player finds out, and they could not notice at first but if they replay the game the trick is obvious.

_Persona 5 Royal (2019)_

![Image](/Docs/branced/branched_P5.png)

In some games the objective of the conversation can be improving the players relationship with the NPC, and the players try to find the “best” response to get more “friendly points” with that NPC, Persona 5 does this when the player decides to pass the morning or evening with a friend, another recent example is Haven that gives the player levels and abilities in regards how much the relationship between the two protagonist develops.

_Haven (2020)_

![Image](/Docs/branced/branched_haven.gif)

There’s another approach to the branching dialog system that was more popular in the western, in games simulating roleplaying tabletop games, the player options are usually written word by word, the player know exactly how his avatar will respond but breaks the flow of the conversation taking a long time between response and response while the player reads the possible options and thinks which one to choose.

One example of this approach are the divinity original sin games, those of the player a vast diversity of answers depending on class, race, background, abilities and alignment. Letting the player’s character to act very differently depending on how the avatar is and past choices, but the conversations may take too long to the more casual audience.

_Divinity: Original Sin II (2017)_

![Image](/Docs/branced/branched_divinity.png)

One little add-on that made the conversations feel more natural without long silences was implemented on Mass Effect, where the player could read the possible responses he had while the NPC was still talking, helping thus to follow the flow of a real conversation. But, at the same time making simpler options so the player had time to read them in time.

_Mass Effect (2007)_

![Image](/Docs/branced/branched_mass_effect.jpg)

This concept has evolved during the years and we have seen the player responses shorten to the point it can be confusing and often the avatar will act differently from what the player expected based on the options he had, Fallout 4 was highly criticized for a poorly made and not intuitive dialog system where the options where too ambiguous and the player didn't know hot his character would act, leading to paths the players didn't intend to go.

_Fallout 4 (2015)_

![Image](/Docs/branced/branched_fallout4.jpg)

There is also a mod that reveals all dialogue options before you choose.

_Fallout 4 (2015) [Fully Dialogue Interface](https://www.nexusmods.com/fallout4/mods/1235/?) mod. Image from [Polygon](https://www.polygon.com/fallout-4/2015/11/18/9756972/fallout-4-dialogue-mod-pc-xbox-playstation)._

![](/Docs/branced/branched_fallout4_mod.jpg)

### Hub-and-Spokes Dialog

This method gives the player more freedom to explore all the paths and responses, where at the start of a conversation the player can ask from a “hub” where he chooses one option and after the NPC response the player can choose a different option from the same “hub” and even repeat the same response, until the players decides to stop the conversation with a hub option.

There may be “subhubs” hidden within a certain response and the player can reenter to those “subhubs” with a dialogue option from the principal “hub” as many times he wants.

These interactions give total freedom to the player to discover as much narrative as he wants but not following a natural conversation. Also the NPC has infinite time and paciencie to answer the players as much as they want, so this option is not recommended in high action situations. 

As an example we have the shops in undertale, the best NPCs to talk about the narrative of the game, and how the world functions, they will sell you items and the player can also talk to them using the Hub-and-Spokes dialog system.

_Undertale (2015), Hub example_

![](/Docs/hub_and_spokes/undertale_hub.png)

_Undertale (2015), Subhub example when the players selects talk opinion in the hub_

![](/Docs/hub_and_spokes/undertale_subhub.PNG)

### Parser-Driven Dialog

This is the method used with ELIZA, and has seen some use in the early days of dialog systems, but nowadays it's rarely implemented in any game. This system lets the player write their responses word by word, but it can be misunderstood by the machine creating some rather strange situations.

In the past there have been text adventures completely playable by writing inputs, but more that an actual Parser-Driven Dialog those game had options hidden behind key words the player had to guess, and the interaction with other NPCs was similar to the Branching/Hub-and-Spokes dialog.

One example of written text adventure is Zork where the player wrote every action he did.
You can try it yourself here: [play Zork](http://textadventures.co.uk/games/play/5zyoqrsugeopel3ffhz_vq)

_Zork (1977)_

![](/Docs/pareser_driven/parser_zorg.PNG)

One more actual game that used this dialog system was Façade in 2005, where the player tries to deal with the problems of a couple. This game uses Artificial Intelligence to direct the conversation around the words the user puts in his sentences, these games may look the more interactive compared with the others dialog systems, but making a good enough AI that can understand the player intentions is complex and simple mistakes can totally break the immersion.

_Façade (2005)_

![](/Docs/pareser_driven/parser_facade.gif)

### Parser-Driven Dialog

There are games that don’t use a conversation system itself, but implement some sort of interactions with NPC, like gestures or signals thet in many cases give a reward to the players.
We won't get too deep into this system because it’s implemented very differently than the others, nevertheless here are some examples of games using the systemic interactions.

In Spore the player can get allies to help him fight or persuade other creatures using systemic interactions. Where depending on the skills of your avatar you will be able to befriend more creatures by filling the bar on the head of the creature.

_Spore (2008)_

![](/Docs/systemic_interactions/systemic_interactions_spore.jpg)

Another example could be the Sims saga where the interactions don't follow any dialog system we have seen, where the player can choose how the avatars interact with each other, but not in a conversation itself, you can decide how the avatars will act but and what topics will they talk about but the narrative itself is created by the player.

_Sims 4 (2014)_

![](/Docs/systemic_interactions/systemic_interaction_sims4.jpg)

With all the theory clear, now we can decide which dialogue system we want to implementate on our game, knowing what the cons and pros are for the diferent variables. So the one I will we explaining today it's branching systems, because those give flexible and quite interatives narrative options.

# Implementation

Making a branching system is just efficient, with little to no extra work we can use it as an non-branching system and also with some modifications it could work as a Hub-and-Spoke dialog system.

Now, how do those trees see, and how can we desing them? One easy way is making our own charts to help us visualiza how the interactions will connect and which pathes the player could take.
Here are some examples, this first one is a branching dialogue chart.

![](/Docs/Charts/branching_blank_chart.png)

Then once the dialogue tree is finished, we must assing diferent ID to every node, esencialy a variable that makes us able to localize the node, and also make another varibale called for example nextNode, that tells what node the chosen option is pointing to, so we can follow a path made by the diferent nextNode numbers, knowing which nodes the player has visited.
Here we have the same chart as last but with the diferent nodes ID and what node the options will take us too described by a variable:

![](/Docs/Charts/branching_variables_chart.png)

Once we how the chart is going to work, the more important step. Actually writting the dialogue the NPC and player will have, this can be done before the chart and I also recomend you to do it first, it is structured like this to make the branching system easier to understand without the text already added.
The example with the dialogue written:

![](/Docs/Charts/branching_written_chart.png)

Now that we have defined our dialogue tree, we need to make clear that we will also need a pointer, that follows the player path so we know where the dialogues is going and alse where it came from, this pointer will be called currentNode, and as the name says will be pointing the node we are actually in.

## Defining the data as XML

The way we are going to cointain all the dialogue information is with XML file, in these files the diferent branches will be divided this way:
The dialogueExample ID as the parent of the entire chart we have seen, having as many childs as nodes we add, and those node will have also 1 child per each possible response the players has in the node. For example a dialogue with 5 nodes will have 5 childs called node each one with a diferent ID, and then every node will have another child per possible response the player has, as an example if the player can answer: yes or no, the node will have two childs, each one with a diferent nextNode value.
```
<dialogueTree>
  <dialogueExample Id="0">
    <node text="Hello do you have a moment?"  id="0">
      <dialogue option="No sorry" returnCode="0" nextNode="1"/>
      <dialogue option="Yes what is it?" returnCode="0" nextNode="2"/>
    </node>
    <node text="Thats to bad bye"  id="1">
      <dialogue option="Bye" returnCode="0" nextNode="100"/>
    </node>
    <node text="I have a quest for you" id="2">
      <dialogue option="Not interested" returnCode="0" nextNode="100"/>
      <dialogue option="What do I have to do?" returnCode="0" nextNode="4"/>
      <dialogue option="I dont work for free" returnCode="0" nextNode="3"/>
    </node>
    <node text="I can pay you five gold coins" id="3">
      <dialogue option="Then we have a deal whats the quest about?" returnCode="0" nextNode="4"/>
      <dialogue option="Thats not enough bye" returnCode="0" nextNode="100"/>
    </node>
    <node text="Killing some giant rats" id="4">
      <dialogue option="Lets do it already" returnCode="1" nextNode="101"/>
      <dialogue option="Im scared of rats" returnCode="0" nextNode="100"/>
    </node>
    <node text ="End of conversation R to talk again" id ="100">
    </node>
    <node text ="Mision accepted R to talk again" id ="101">
    </node>
  </dialogueExample>
```

## Code

Diferent classes and functions implemented.

# DialogueSystem
This class loads the entire XML document and divides the information in the diferent three other classes. It also renders the dialogue on screen, but that is not recomended, the code solution handed it's a little demostartion of what could be done, but it's not as efficient as it could be, it's preferable to have a diferent module that prints de dialogue. But here the DialogueSystem Update does it. The way this code work is by using the LoadDialogue, LoadNodes, and LoadOptions to load the main tree, the nodes and the responses respectively.
```
class DialogueSystem : public Module
{
public:
	DialogueSystem();
	DialogueSystem(Input* input, Render* render, Textures* tex)
	{
		this->input = input;
		this->render = render;
		this->tex = tex;
	}
	~DialogueSystem();

	bool Start();
	bool Update(float dt);
	bool CleanUp();
	void PerformDialogue(int treeId);
	bool LoadDialogue(const char*);
	bool LoadNodes(pugi::xml_node& trees, DialogueTree* oak);
	bool LoadOptions(pugi::xml_node& text_node, DialogueNode* npc);
	
private:
	int playerInput = 7;
	int Id = 0;
	std::vector <DialogueTree*> dialogueTrees;
	DialogueNode* currentNode;
	pugi::xml_document	dialogues;

	Font* font;
	Input* input;
	Render* render;
	Textures* tex;

};
```

# DialogueTree
This simple class stores the ID of every dialogue and has a vector with the diferent childs(nodes) atached to him so we can go to every node from its parent tree dialogue.
```
class DialogueTree
{
public:
	DialogueTree() {};
	~DialogueTree() {};


public:
	int treeId;
	vector <DialogueNode*> dialogueNodes;
};
```

# DialogueNode
This class stores an string with the text the NPC will say when this node ID matches the currentNode ID, obviouly has a ID definded as nodeID to distinguish between them. It a vector similar to the one the DialogueTree had that lists the diferent options the node has, also the List of answersList was added to print the player options on screen.

```
class DialogueNode
{
public:
	DialogueNode() {};
	~DialogueNode() {};

	DialogueNode(string Text);
	string text;
	vector <DialogueOption*> dialogueOptions;
	List <string> answersList;
	int nodeId;
};
```

# DialogueOption
This class stores the nodes child, that are the players options can choose, those store the text the player says in a string, the node their are pointing to with the variable nextNode and also, a another variable called returnCode, this has no use in this demo, but it can be used to trigger special events (quest for example) when the return code is diferent than 0.

```
class DialogueOption
{
public:
	DialogueOption() {};
	~DialogueOption() {};

	DialogueOption(string Text, int ReturnCode, int NextNode);
	string text;
	int returnCode;
	int nextNode;
};


```
