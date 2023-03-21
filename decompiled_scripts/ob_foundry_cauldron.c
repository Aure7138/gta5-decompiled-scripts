#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x78BF2001491914AC(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2137828D03306CAF(uScriptParam_0))
		{
			if (unk_0x9F6E8D8D1BBF7A81(uScriptParam_0) && unk_0x09952BA662A7629B(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
						{
							uVar0 = unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91());
							if (unk_0xA419466089F321B4(uVar0))
							{
								if (unk_0xACBF56DC1C78B822(uVar0))
								{
									if (unk_0x832CFCEE4BC06D3A())
									{
										unk_0x926AB8F66F783F4D();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1135D5BD86A70AD2())
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0x2137828D03306CAF(uLocal_4))
								{
									uLocal_4 = unk_0x96FF6B9A3E05D35F(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x7766CF1CC89CA80D(uLocal_3))
								{
									if (unk_0x2137828D03306CAF(uLocal_4))
									{
										uVar0 = unk_0xD05429D1ADB47D25(unk_0x2A5EB8B0FE590B91());
										if (unk_0xA419466089F321B4(uVar0))
										{
											if (unk_0xACBF56DC1C78B822(uVar0))
											{
												if (unk_0x832CFCEE4BC06D3A())
												{
													uLocal_3 = unk_0x2FBC377D2B29B60F("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
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
	if (unk_0x7766CF1CC89CA80D(uLocal_3))
	{
		unk_0x55429531048BB70C(uLocal_3, 0);
	}
	if (unk_0x2137828D03306CAF(uLocal_4))
	{
		unk_0x0EE36F9D946F47F2(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
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

