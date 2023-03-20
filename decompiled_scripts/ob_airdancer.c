#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_1();
	}
	if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
	{
		unk_0x7D9EFB7AD6B19754(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
		{
			if (unk_0xF15D7EC08DFE28DB(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x20487F0DA9AF164A(uScriptParam_0))
						{
							unk_0xA862A2AD321F94B4("map_objects");
							if (unk_0x27FF6FE8009B40CA("map_objects"))
							{
								unk_0xDC6D22FAB76D4874(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x5E8B6D17FF91CD59();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xD3852F22AB713A1F(uParam0, uParam0))
	{
	}
}

