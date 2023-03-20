#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x9CEB376419A71A96(2))
	{
		func_1();
	}
	if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
	{
		unk_0x93F4FB97D1F2E7A1(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
		{
			if (unk_0xF956B5861E255755(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2D08B60CBF8230F6(uScriptParam_0))
						{
							unk_0x198E497B820DA913("map_objects");
							if (unk_0x7B43775D6E0D7325("map_objects"))
							{
								unk_0xBCEDA21437BEF498(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0xF5DF8F3392CDD07B();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x2F6869889D97DFED(uParam0, uParam0))
	{
	}
}

