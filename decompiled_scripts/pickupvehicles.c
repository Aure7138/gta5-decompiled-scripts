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
	if (unk_0xD63E63DFACCEB80E(18))
	{
		if (unk_0x3EFB3EBE849BDD7F() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7B47A371E2D93C2C(joaat("docks_setup")) == 0)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_27 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				}
				else
				{
					iLocal_27 = 0;
				}
			}
			if (unk_0x746960881FB19A89(iLocal_27))
			{
				if (unk_0xFC38B241541883D3(iLocal_27, 0))
				{
					if (unk_0x343BE15E9FFCF907(iLocal_27, joaat("handler")))
					{
						unk_0x303F3ACCD1D0223D(0, 51);
						if (!unk_0x7E5AA9ECB89FB554(iLocal_27))
						{
							if (iLocal_31 == 0)
							{
								if (!unk_0x746960881FB19A89(iLocal_28) || (unk_0x746960881FB19A89(iLocal_28) && unk_0x73A3AED255AF2667(unk_0x77009B1C011405A9(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_28))
								{
									iLocal_28 = unk_0x73A3AED255AF2667(unk_0x77009B1C011405A9(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x746960881FB19A89(iLocal_28))
								{
									if (func_1(&uLocal_29, 1000))
									{
										if (unk_0x585606EB23512F17(iLocal_27, iLocal_28))
										{
											if (unk_0x205C5BF7277043DF(0, 51))
											{
												unk_0x979C7AFF19402EE4(iLocal_27, iLocal_28);
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
								uLocal_29 = unk_0x17103F66FBB44C3C();
								iLocal_30 = 0;
								iLocal_31 = 0;
							}
							if (unk_0x205C5BF7277043DF(0, 51))
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
	
	iVar0 = unk_0x17103F66FBB44C3C();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xE60DEFFB2A853900();
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

