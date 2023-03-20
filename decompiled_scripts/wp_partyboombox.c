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
	if (unk_0xD32535FA4397160F(joaat("wp_partyboombox")) > 1)
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	if (unk_0x524AF15206846700(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x7742FB54677E08D9())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xEFEADD7EBD01C0A6() >= 22 || unk_0xEFEADD7EBD01C0A6() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xBDA20BD415464BD5("ID2_21_G_Night"))
				{
					unk_0xAE50B46D4D30305D("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x9A7F0D797C57AC34() && !unk_0x5D293E404CA20AA5())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xBDA20BD415464BD5("ID2_21_G_Night"))
	{
		unk_0x79EE50983E41D399("ID2_21_G_Night");
	}
	unk_0x7C3AA2D27E16E2AD();
}

