#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xAB964FCFAC3C767A(joaat("wp_partyboombox")) > 1)
	{
		unk_0x01DFCA3621B68C4A();
	}
	if (unk_0x2170E7BC25114A22(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x0943F317505D1E39())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x83D6515EE2CBF18C() >= 22 || unk_0x83D6515EE2CBF18C() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xC5C451876961F4BA("ID2_21_G_Night"))
				{
					unk_0x32EAD4829CDBABEF("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xC9C30ADF21E89D79() && !unk_0xB0D174BA6F10DF7B())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xC5C451876961F4BA("ID2_21_G_Night"))
	{
		unk_0x6FE7B9647FC3C004("ID2_21_G_Night");
	}
	unk_0x01DFCA3621B68C4A();
}

