#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	func_4(21);
	if (unk_0xC11469DCA6FC3BB5(18))
	{
		if (unk_0x84E8E29EBD4A46D2() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x8E34C953364A76DD(joaat("docks_setup")) == 0)
		{
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					iLocal_27 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
				}
				else
				{
					iLocal_27 = 0;
				}
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_27))
			{
				if (unk_0xB86D29B10F627379(iLocal_27, 0))
				{
					if (unk_0x0045A54EC7A22455(iLocal_27, joaat("handler")))
					{
						unk_0xDA067FC477B3E571(0, 51);
						if (!unk_0x21FD7A2C52540968(iLocal_27))
						{
							if (iLocal_31 == 0)
							{
								if (!unk_0xD42BD6EB2E0F1677(iLocal_28) || (unk_0xD42BD6EB2E0F1677(iLocal_28) && unk_0x066A16145417A72D(unk_0xA86D5F069399F44D(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_28))
								{
									iLocal_28 = unk_0x066A16145417A72D(unk_0xA86D5F069399F44D(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xD42BD6EB2E0F1677(iLocal_28))
								{
									if (func_1(&uLocal_29, 1000))
									{
										if (unk_0x723BC44AEDD72E76(iLocal_27, iLocal_28))
										{
											if (unk_0xCCBB0BB9790E1F47(0, 51))
											{
												unk_0xC51229C4E84292BC(iLocal_27, iLocal_28);
												iLocal_30 = 1;
												iLocal_31 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_30 == 1)
							{
								uLocal_29 = unk_0x4F67E8ECA7D3F667();
								iLocal_30 = 0;
								iLocal_31 = 0;
							}
							if (unk_0xCCBB0BB9790E1F47(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4F67E8ECA7D3F667();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x5E8B6D17FF91CD59();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

