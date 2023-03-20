#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x7547D7CF93115D6D(2))
	{
		func_1();
	}
	if (unk_0xFD68187442384158(uScriptParam_0))
	{
		unk_0x479E7EEEBDEE245D(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFD68187442384158(uScriptParam_0))
		{
			if (unk_0xDBBE1D10A2F589A7(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xFBE2EB4D474675FC(uScriptParam_0))
						{
							unk_0x395C5D98343F0040("map_objects");
							if (unk_0xCE40391AB65FE305("map_objects"))
							{
								unk_0x7FFC7B578074E5B8(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x883793591E631A3B();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

