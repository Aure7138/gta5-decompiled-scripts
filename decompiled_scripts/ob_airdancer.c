#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x524AF15206846700(2))
	{
		func_1();
	}
	if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
	{
		unk_0xA8CA82EB31D1626F(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
		{
			if (unk_0x179C5C4A19D3D535(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1B44B568175DB615(uScriptParam_0))
						{
							unk_0x88172B3983EC5071("map_objects");
							if (unk_0x482101C9B3483958("map_objects"))
							{
								unk_0x7318FEB27BFEAB70(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x7C3AA2D27E16E2AD();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xC1C5B83BB6719C6C(uParam0, uParam0))
	{
	}
}

