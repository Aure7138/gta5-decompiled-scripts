#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x76BF814AB8D4CAB8(2))
	{
		func_1();
	}
	if (unk_0x31F12808DC47A9E5(uScriptParam_0))
	{
		unk_0x73D7E57BF0ED7FEB(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x31F12808DC47A9E5(uScriptParam_0))
		{
			if (unk_0x7F92B610D05B72B6(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x428E1B96ACD96150(uScriptParam_0))
						{
							unk_0x831CD0FBFB26EC7E("map_objects");
							if (unk_0x028356968FDD2DF2("map_objects"))
							{
								unk_0x33AE9ADB6499B6DB(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x810C5D6462DD69E6();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

