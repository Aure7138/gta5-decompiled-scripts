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
	if (unk_0xB9B05E900D325C36(18))
	{
		if (unk_0x6BD2A9ED76EC68DF() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7832F791572D5809(joaat("docks_setup")) == 0)
		{
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					iLocal_28 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_28))
			{
				if (unk_0x432757A9E7AAFA96(iLocal_28, 0))
				{
					if (unk_0xEE37D610E00A6E4E(iLocal_28, joaat("handler")))
					{
						unk_0x8662FAB20C4C3CFB(0, 51);
						if (!unk_0x6674E1DF2D3CC337(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x76B3C79DE564AFC6(iLocal_29) || (unk_0x76B3C79DE564AFC6(iLocal_29) && unk_0xE5277EB89570BEE8(unk_0xF177E0DA126D71C8(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xE5277EB89570BEE8(unk_0xF177E0DA126D71C8(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x76B3C79DE564AFC6(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x67AEEB264B9AF5C1(iLocal_28, iLocal_29))
										{
											if (unk_0xD887E21676314450(0, 51))
											{
												unk_0xD904FA25F6418EAF(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0x31CD6E9F83C10233();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0xD887E21676314450(0, 51))
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
	
	iVar0 = unk_0x31CD6E9F83C10233();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xBEE2834559A8897A();
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
	if (unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[iVar0], iVar1))
	{
		unk_0xD804ACF2A7171150(&(Global_104439.f_8946.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0x2A3398C6222EB190(Global_104439.f_8946.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_8946.f_99.f_219[iVar0]), iVar1);
	return 1;
}

