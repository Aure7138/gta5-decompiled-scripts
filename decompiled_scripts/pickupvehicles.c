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
	if (unk_0xBCA819F9975BEDFA(18))
	{
		if (unk_0xF8A4157569AF4F61() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x82F1A060D8F4583B(joaat("docks_setup")) == 0)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iLocal_28 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x23E9113C762466ED(iLocal_28))
			{
				if (unk_0x45CD66F0A131E554(iLocal_28, 0))
				{
					if (unk_0x5AF6E4F22F4B49C3(iLocal_28, joaat("handler")))
					{
						unk_0x28EAA5C7C54BD253(0, 51);
						if (!unk_0x4C649A3827B6C07F(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x23E9113C762466ED(iLocal_29) || (unk_0x23E9113C762466ED(iLocal_29) && unk_0x29280EF6724677F5(unk_0x57240623C1BC6E88(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x29280EF6724677F5(unk_0x57240623C1BC6E88(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x23E9113C762466ED(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x09BFA8E588D7AF24(iLocal_28, iLocal_29))
										{
											if (unk_0x4B972043966C2EB8(0, 51))
											{
												unk_0x8EB5480738A8770E(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0x94E3E074F38DF86C();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x4B972043966C2EB8(0, 51))
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
	
	iVar0 = unk_0x94E3E074F38DF86C();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x921053BAF754303D();
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
	if (unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[iVar0], iVar1))
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_8044.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_8044.f_99.f_219[iVar0]), iVar1);
	return 1;
}

