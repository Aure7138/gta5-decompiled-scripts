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
	if (unk_0x2170E7BC25114A22(18))
	{
		if (unk_0xDA423D1028DEF91B() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xAB964FCFAC3C767A(joaat("docks_setup")) == 0)
		{
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					iLocal_28 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x7887B64A08364778(iLocal_28))
			{
				if (unk_0xA4DB44DF73EF4FE5(iLocal_28, 0))
				{
					if (unk_0x960985BE189C5A3B(iLocal_28, joaat("handler")))
					{
						unk_0x4214C5222DAB7698(0, 51);
						if (!unk_0x78E8C99CB88AD81A(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x7887B64A08364778(iLocal_29) || (unk_0x7887B64A08364778(iLocal_29) && unk_0x722BCBA6950595C0(unk_0xC086F8D75730FA3A(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x722BCBA6950595C0(unk_0xC086F8D75730FA3A(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x7887B64A08364778(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x732C1708739D9859(iLocal_28, iLocal_29))
										{
											if (unk_0x3CEEA45E4779F6BD(0, 51))
											{
												unk_0xE77D2C6A85D893EB(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0x84A97C70FFDEC0C8();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x3CEEA45E4779F6BD(0, 51))
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
	
	iVar0 = unk_0x84A97C70FFDEC0C8();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x01DFCA3621B68C4A();
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
	return 1;
}

