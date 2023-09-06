## Some starter notes
- Int – any integer (-1, 0, 1, 2, etc.)
- Float – any decimal (1.5,-3.5, etc.) MUST be a decimal to be read as a float.
- String – anything enclosed by quotation marks ("hello world", "myVariableName", etc.)
- Bool – either true or false.
- Everything MUST be on a separate line.
- Every piece of code starts with an Event List (`OnFirstLoad()`, `OnPlayerEnterRegion`) and is enclosed by curly braces.
- Eg: OnFirstLoad() will execute everything within the { } upon first loading the script.
  ```rust
  {
  }
  ```
- LoopTypes (If, While) are used to signify conditions before performing actions. All actions done by a condition is also enclosed by curly braces.
- Eg: 
  ```rust
  OnFirstLoad()
  {
    If(Int.Equals(VariableInt("myInt"), 1))
    {
    }
  }
  ```
- Variables are accessed by first typing the variable type, and then the variable name as a string enclosed by parenthesis.
  Eg: VariableInt("myInt") will get the integer stored as variable name myInt. Note the variable must be set first or an error will be returned.
- Even types with variable strings will store variables based on type.
  Eg: `OnPlayerEnterRegion["region1"]("myPlayer")` will set VariablePlayer("myPlayer") to the entered player once it enters region1.
  Region locations, sizes, and names are defined in the map editor, but used in the script.
- I’ll try to make this more comprehensive later, for now this should get you started on the basics. There are very few type checks right now, so if your game doesn’t work it’s more likely a mistake you made in the scripting.

1. [x] Event List
  - OnFirstLoad()
  - OnRoundStart()
  - OnUpdate() – run every second
  - OnPlayerEnterRegion[string RegionName](string VariablePlayerName)
  - OnPlayerLeaveRegion[string RegionName](string VariablePlayerName)
  - OnTitanEnterRegion[string RegionName](string VariableTitanName)
  - OnTitanLeaveRegion[string RegionName](string VariableTitanName)
  - OnTitanDie(string VariableTitanName, string VariablePlayerName)
  - OnPlayerDieByTitan(string VariablePlayerName, string VariableTitanName)
  - OnPlayerDieByPlayer(string VariablePlayerName, string VariablePlayerName)
  - OnChatInput(string VariableStringName) – MasterClient only
2. [ ] LoopTypes
  - If(condition)
  - While(condition)
  - ForeachTitan(string VariableTitanName)
  - ForeachPlayer(string VariablePlayerName)
3. [x] Conditions
  - Integers
    - Int.Equals(int base, int compare)
    - Int.NotEquals(int base, int compare)
    - Int.LessThan(int base, int compare)
    - Int.LessThanOrEqual(int base, int compare)
    - Int.GreaterThanOrEqual(int base, int compare)
    - Int.GreaterThan(int base, int compare)
  - Booleans
    - Bool.Equals(bool base, bool compare)
    - Bool.NotEquals(bool base, bool compare)
  - Strings
    - String.Equals(string base, string compare)
    - String.NotEquals(string base, string compare)
    - String.Contains(string base, string contained)
    - String.NotContains(string base, string contained)
    - String.StartsWith(string base, string start)
    - String.NotStartsWith(string base, string start)
    - String.EndsWith(string base, string end)
    - String.NotEndsWith(string base, string end)
  - Floats
    - Float.Equals(float base, float compare)
    - Float.NotEquals(float base, float compare)
    - Float.LessThan(float base, float compare)
    - Float.LessThanOrEqual(float base, float compare)
    - Float.GreaterThanOrEqual(float base, float compare)
    - Float.GreaterThan(float base, float compare)
  - Player
    - Player.Equals(Player base, Player compare)
    - Player.NotEquals(Player base, Player compare)
  - Titan
    - Titan.Equals(Titan base, Titan compare)
    - Titan.NotEquals(Titan base, Titan compare)
4. Actions
  - Class VariableInt
    - VariableInt.Set(string variableName, int value)
    - VariableInt.Add(string variableName, int value)
    - VariableInt.Subtract(string variableName, int value)
    - VariableInt.Multiply(string variableName, int value)
    - VariableInt.Divide(string variableName, int value)
    - VariableInt.Modulo(string variableName, int value)
    - VariableInt.Power(string variableName, int value)
    - VariableInt.SetRandom(string variableName, int lower, int higher)
  - Class VariableBool
    - VariableBool.Set(string variableName, bool value)
    - VariableBool.SetToOpposite(string VariableName)
    - VariableBool.SetRandom(string variableName)
  - Class VariableString
    - VariableString.Set(string variableName, string value)
    - VariableString.Concat(string variableName, string value1, string value2, …)
    - VariableString.Append(string variableName, string value)
    - VariableString.Replace(string variableName, string oldValue, string newValue)
    - VariableString.Remove(string VariableName, string removeMe)
  - Class VariableFloat
    - VariableFloat.Set(string variableName, float value)
    - VariableFloat.Add(string variableName, float value)
    - VariableFloat.Subtract(string variableName, float value)
    - VariableFloat.Multiply(string variableName, float value)
    - VariableFloat.Divide(string variableName, float value)
    - VariableFloat.Modulo(string variableName, float value)
    - VariableFloat.Power(string variableName, float value)
    - VariableFloat.SetRandom(string VariableName, float lower, float higher)
  - Class VariablePlayer
    - VariablePlayer.Set(string variableName, VariablePlayer player)
  - Class VariableTitan
    - VariableTitan.Set(string variableName, VariableTitan titan)
  - Class Player
    - Player.KillPlayer(VariablePlayer player, String KillerName)
    - Player.SpawnPlayer(VariablePlayer player)
    - Player.SpawnPlayerAt(VariablePlayer player, float PositionX, float PositionY, float PositionZ)
    - Player.MovePlayer(VariablePlayer player, float PositionX, float PositionY, float PositionZ)
    - Player.SetKills(VariablePlayer player, int kills)
    - Player.SetDeaths(VariablePlayer player, int deaths)
    - Player.SetMaxDmg(VariablePlayer player, int MaxDmg)
    - Player.SetTotalDmg(VariablePlayer player, int TotalDmg)
    - Player.SetName(VariablePlayer player, string name)
    - Player.SetGuildName(VariablePlayer player, string guildname)
    - Player.SetTeam(VariablePlayer player, int team)
    - Player.SetCustomInt(VariablePlayer player, int integer)
    - Player.SetCustomBool(VariablePlayer player, bool Boolean)
    - Player.SetCustomString(VariablePlayer player, string str)
    - Player.SetCustomFloat(VariablePlayer player, float decimal)
  - Class Titan
    - Titan.KillTitan(VariableTitan titan, VariablePlayer killer, int damage)
    - Titan.SpawnTitan(int type, float size, int health, int number)
    - Titan.SpawnTitanAt(int type, float size, int health, int number, float PositionX, float PositionY, float PositionZ,)
    - Titan.SetHealth(VariableTitan titan, int health)
    - Titan.MoveTitan(VariableTitan titan, float PositionX, float PositionY, float PositionZ)
    - Titan types: 0 for normal, 1 for abnormal, 2 for jumper, 3 for crawler, 4 for punk.
  - Class Game
    - Game.PrintMessage(string message)
    - Game.LoseGame(bool clearVariables)
    - Game.WinGame(bool clearVariables)
    - Game.Restart(bool clearVariables)
5. Return Properties
  - [x] Class Primitives
    - Integers – any non-decimal
    - Boolean – true or false
    - Float – any decimal
    - String – enclosed by " "
  - [x] Class Variable
    - int VariableInt(string variableName)
    - bool VariableBool(string variableName)
    - string VariableString(string variableName)
    - float VariableFloat(string variableName)
    - Player VariablePlayer(string variableName)
    - Titan VariableTitan(string variableName)
  - Class Player
    - int player.GetTeam()
    - int player.GetType()
    - bool player.GetIsAlive()
    - int player.GetTitan()
    - int player.GetKills()
    - int player.GetDeaths()
    - int player.GetMaxDmg()
    - int player.GetTotalDmg()
    - int player.GetCustomInt()
    - bool player.GetCustomBool()
    - string player.GetCustomString()
    - float player.GetCustomFloat()
    - float player.GetPositionX()
    - float player.GetPositionY()
    - float player.GetPositionZ()
    - string player.GetName()
    - string player.GetGuildName()
    - float player.GetSpeed()
  - Class Titan
    - int titan.GetType()
    - float titan.GetSize()
    - int titan.GetHealth()
    - float titan.GetPositionX()
    - float titan.GetPositionY()
    - float titan.GetPositionZ()
  - [x] Class Region
    - float RegionRandomX(string RegionName)
    - float RegionRandomY(string RegionName)
    - float RegionRandomZ(string RegionName)
6. [x] Other Extensions
  - int ConvertToInt
  - bool ConvertToBool
  - string ConvertToString
  - float ConvertToFloat

Examples:
Titan split mode:
```rust
OnTitanDie("myTitan","myPlayer")
{
  VariableFloat.Set("mySize",VariableTitan("myTitan").GetSize());
  If (Float.GreaterThan(VariableFloat("mySize"),1.0))
  {
    VariableFloat.Divide("mySize",2.0);
    VariableFloat.Set("posX",VariableTitan("myTitan").GetPositionX());
    VariableFloat.Set("posY",VariableTitan("myTitan").GetPositionY());
    VariableFloat.Set("posZ",VariableTitan("myTitan").GetPositionZ());
    VariableFloat.Add("posX",5.0);
    Titan.SpawnTitanAt(0, VariableFloat("mySize"), 100, 1, VariableFloat("posX"), VariableFloat("posY"), VariableFloat("posZ"));
    VariableFloat.Subtract("posX",10.0);
    Titan.SpawnTitanAt(0, VariableFloat("mySize"), 100, 1, VariableFloat("posX"), VariableFloat("posY"), VariableFloat("posZ"));
  }
}
```
Spawn 5 titans in region2 when a player enters region1.
First enter level editor & add two regions, one labeled region1 and the other labeled region2.
Afterwards use this script alongside the custom level.
```rust
OnPlayerEnterRegion["region1"]("myPlayer")
{
  Titan.SpawnTitanAt(0, 2.0, 100, 5, RegionRandomX("region2"),RegionRandomY("region2"),RegionRandomZ("region2"));
}
```
