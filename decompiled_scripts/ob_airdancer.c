#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xB9B05E900D325C36(2))
	{
		func_1();
	}
	if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
	{
		unk_0x1F18D3C78C8C1A11(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
		{
			if (unk_0x4673A7E6EA033947(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2E09710078322CDE(uScriptParam_0))
						{
							unk_0x9F62787D280BF2EC("map_objects");
							if (unk_0xB3379AC2E71D1E7E("map_objects"))
							{
								unk_0x5049C2D0A202B94E(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0xBEE2834559A8897A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xB3404E397FF56B3B(uParam0, uParam0))
	{
	}
}

