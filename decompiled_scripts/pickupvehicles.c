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
	if (unk_0x8D841F1DD3FA555F(18))
	{
		if (unk_0x7918CAF69196C22D() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x968BF1C2C695B61A(joaat("docks_setup")) == 0)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_27 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				}
				else
				{
					iLocal_27 = 0;
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_27))
			{
				if (unk_0x7404950238A154C2(iLocal_27, 0))
				{
					if (unk_0xCC6B00B8460CDA0E(iLocal_27, joaat("handler")))
					{
						unk_0x89086B596828ACBE(0, 51);
						if (!unk_0x2BDF8B6EC056D941(iLocal_27))
						{
							if (iLocal_31 == 0)
							{
								if (!unk_0x86CCCD2FAE9D5E65(iLocal_28) || (unk_0x86CCCD2FAE9D5E65(iLocal_28) && unk_0xA0650591A05CB4F6(unk_0xB6AE0DAE06D56288(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_28))
								{
									iLocal_28 = unk_0xA0650591A05CB4F6(unk_0xB6AE0DAE06D56288(iLocal_27, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x86CCCD2FAE9D5E65(iLocal_28))
								{
									if (func_1(&uLocal_29, 1000))
									{
										if (unk_0x321EE5C653C5CAD2(iLocal_27, iLocal_28))
										{
											if (unk_0x093DEAE9A023FAA0(0, 51))
											{
												unk_0x1D697E226D4CFBFE(iLocal_27, iLocal_28);
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
								uLocal_29 = unk_0x48E480685981C7D4();
								iLocal_30 = 0;
								iLocal_31 = 0;
							}
							if (unk_0x093DEAE9A023FAA0(0, 51))
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
	
	iVar0 = unk_0x48E480685981C7D4();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xC23A229F78DAD92A();
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
	if (unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iVar0], iVar1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_7699.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_7699.f_99.f_219[iVar0]), iVar1);
	return 1;
}

