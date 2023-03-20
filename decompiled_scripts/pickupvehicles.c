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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0x4B4BD87E3D30C50D(18))
	{
		if (unk_0x33F275AA0BDB67FF() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB1A77D5C890711F9(joaat("docks_setup")) == 0)
		{
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_28 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x1F2158D615BC4B25(iLocal_28))
			{
				if (unk_0x968EA16107097324(iLocal_28, 0))
				{
					if (unk_0x3CE8DE6EBE766C15(iLocal_28, joaat("handler")))
					{
						unk_0xE494527A450B8456(0, 51);
						if (!unk_0xED676B9E0BF73937(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x1F2158D615BC4B25(iLocal_29) || (unk_0x1F2158D615BC4B25(iLocal_29) && unk_0xAC531A3CCCC0ACC7(unk_0xAF99169F0F5AE41D(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xAC531A3CCCC0ACC7(unk_0xAF99169F0F5AE41D(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x1F2158D615BC4B25(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0xBB7E138434EDDA94(iLocal_28, iLocal_29))
										{
											if (unk_0x618071F6827C232E(0, 51))
											{
												unk_0x6BF6C45ECBA656CB(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = unk_0x3EAC9995EC220C5A();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x618071F6827C232E(0, 51))
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
	
	iVar0 = unk_0x3EAC9995EC220C5A();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x2F798BA2098FDADE();
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
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[iVar0], iVar1))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_7703.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x573691DB812DC8AA(&(Global_99250.f_7703.f_99.f_219[iVar0]), iVar1);
	return 1;
}

