#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_1();
	}
	if (unk_0x765F6FEEFF39224F(uScriptParam_0))
	{
		unk_0xF70578F5CD9822CB(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x765F6FEEFF39224F(uScriptParam_0))
		{
			if (unk_0x68135A7434393CC1(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x11D8E875F068E371(uScriptParam_0))
						{
							unk_0x0483D0035D6E46FD("map_objects");
							if (unk_0xE9CCF312047EBEE0("map_objects"))
							{
								unk_0x1BE9DE786D9E5DF3(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0x5894DC159447E10A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xCE3CFF625BEBAA04(uParam0, uParam0))
	{
	}
}

