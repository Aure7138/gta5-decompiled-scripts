#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2C897F101BA20806(2))
	{
		func_1();
	}
	if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
	{
		unk_0x3CC3106305C40A28(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
		{
			if (unk_0xC3AF8259DB162ECA(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x48268A6E65463BFD(uScriptParam_0))
						{
							unk_0x3D28909AF30D70F4("map_objects");
							if (unk_0x6C47E32491756A1A("map_objects"))
							{
								unk_0xCF3A4FADE0BA9E36(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x82706E6C897B0FA1();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x9BA82E09A986BA4B(uParam0, uParam0))
	{
	}
}

