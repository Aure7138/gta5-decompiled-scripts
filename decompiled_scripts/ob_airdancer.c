#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_1();
	}
	if (unk_0xD4B321D9096B01FC(uScriptParam_0))
	{
		unk_0x860A5CC30A0EF207(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD4B321D9096B01FC(uScriptParam_0))
		{
			if (unk_0xA887AF38A5D654D0(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x3786322187995952(uScriptParam_0))
						{
							unk_0x36B659209EBDD366("map_objects");
							if (unk_0xB25A0D192C6A0A5B("map_objects"))
							{
								unk_0xAF87685A609CD981(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x9C9E32388A7886A2();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x2553916E420E8EF0(uParam0, uParam0))
	{
	}
}

