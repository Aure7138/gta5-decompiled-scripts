#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x24862A9CDC8F8874(2))
	{
		func_1();
	}
	if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
	{
		unk_0xB7A2078CD1C9A82F(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
		{
			if (unk_0x265A690A472378A4(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x15A98230ABCA9B2D(uScriptParam_0))
						{
							unk_0xC0E8B67A4385D37D("map_objects");
							if (unk_0xF9B86DC1728F1339("map_objects"))
							{
								unk_0xDC31379F47A12F2B(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0xA4E0D8FD51F2A6F7();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xF8D041B05C3D1FD4(uParam0, uParam0))
	{
	}
}

