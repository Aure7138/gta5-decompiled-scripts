#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x78BF2001491914AC(2))
	{
		func_1();
	}
	if (unk_0x2137828D03306CAF(uScriptParam_0))
	{
		unk_0xA32D9C84C1A93920(uScriptParam_0, 1);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2137828D03306CAF(uScriptParam_0))
		{
			if (unk_0x9F6E8D8D1BBF7A81(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x4CB43C80F10ABC26(uScriptParam_0))
						{
							unk_0xA7C81DED990D3418("map_objects");
							if (unk_0x45834D6C20FFF689("map_objects"))
							{
								unk_0x7A1ADAF75122D493(uScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0, 0);
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
	unk_0xA232817B0B36F2E5();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x35302CD5A5D37EED(uParam0, uParam0))
	{
	}
}

