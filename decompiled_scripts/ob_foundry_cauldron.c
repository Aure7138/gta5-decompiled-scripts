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
	
	if (unk_0x4B4BD87E3D30C50D(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x1F2158D615BC4B25(uScriptParam_0))
		{
			if (unk_0xC6C2EDDDD51B6332(uScriptParam_0) && unk_0xB1A77D5C890711F9(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
						{
							uVar0 = unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED());
							if (unk_0x5C31634D1DECF73C(uVar0))
							{
								if (unk_0xE9F04AFCFBB82353(uVar0))
								{
									if (unk_0x0DB9C213C96E456D())
									{
										unk_0xAB01A53F64F073E1();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x4D35306F9B28A02F())
						{
							if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
							{
								if (!unk_0x1F2158D615BC4B25(uLocal_4))
								{
									uLocal_4 = unk_0xAC531A3CCCC0ACC7(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xE5F4784B32AB717D(uLocal_3))
								{
									if (unk_0x1F2158D615BC4B25(uLocal_4))
									{
										uVar0 = unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED());
										if (unk_0x5C31634D1DECF73C(uVar0))
										{
											if (unk_0xE9F04AFCFBB82353(uVar0))
											{
												if (unk_0x0DB9C213C96E456D())
												{
													uLocal_3 = unk_0xB7C6E59B3749539B("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xE5F4784B32AB717D(uLocal_3))
	{
		unk_0x36E5A7148737A1F4(uLocal_3, 0);
	}
	if (unk_0x1F2158D615BC4B25(uLocal_4))
	{
		unk_0xFF0E2D994E7D2E94(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x2F798BA2098FDADE();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x35D1CAD6ADAB6491(uParam0, uParam0))
	{
	}
}

