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
	if (unk_0x76BF814AB8D4CAB8(18))
	{
		if (unk_0x710DEBA94578CF6C() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xE7FAF8E78F7D3A73(joaat("docks_setup")) == 0)
		{
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iLocal_28 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x31F12808DC47A9E5(iLocal_28))
			{
				if (unk_0xC4B84EB67F78C1F0(iLocal_28, 0))
				{
					if (unk_0x0665EB554F07889E(iLocal_28, joaat("handler")))
					{
						unk_0xFCBDBEB257C6D3FB(0, 51);
						if (!unk_0x1EFADA30C3371A2D(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x31F12808DC47A9E5(iLocal_29) || (unk_0x31F12808DC47A9E5(iLocal_29) && unk_0x7F058F004EA8664C(unk_0x761660F5CE986DC4(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0x7F058F004EA8664C(unk_0x761660F5CE986DC4(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x31F12808DC47A9E5(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0x1442D2510E3043F7(iLocal_28, iLocal_29))
										{
											if (unk_0xFC0C00F9DE2AEC93(0, 51))
											{
												unk_0xD109705C6296A547(iLocal_28, iLocal_29);
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
								uLocal_30 = unk_0x5AFB8ED811F05E4D();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0xFC0C00F9DE2AEC93(0, 51))
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
	
	iVar0 = unk_0x5AFB8ED811F05E4D();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x810C5D6462DD69E6();
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
	if (unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[iVar0], iVar1))
	{
		unk_0x62148293B793073B(&(Global_104551.f_9055.f_99.f_219[iVar0]), iVar1);
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
	if (unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_9055.f_99.f_219[iVar0]), iVar1);
	return 1;
}

