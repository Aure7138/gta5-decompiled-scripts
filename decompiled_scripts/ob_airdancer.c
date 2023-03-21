#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xE8A79675302ED812(2))
	{
		func_1();
	}
	if (unk_0x724D816EA203A79E(uScriptParam_0))
	{
		unk_0x346478B12F69D4E3(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x724D816EA203A79E(uScriptParam_0))
		{
			if (unk_0x08B699D523A3F9CB(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xA184E93CD7E0E9AA(uScriptParam_0))
						{
							unk_0x522053D86D6E1C7A("map_objects");
							if (unk_0xF9E082857622D91E("map_objects"))
							{
								unk_0x1F000DD52A4C4208(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x95E4B6F3ED223F5A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x3362CDE8460ED38B(uParam0, uParam0))
	{
	}
}

