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
	if (unk_0xFF6891E21E7FC193(joaat("wp_partyboombox")) > 1)
	{
		unk_0x52F20802944F8DCE();
	}
	if (unk_0x89522B8E487D4EF9(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x18544C93469391DA())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x7C833E3C6EEE41E0() >= 22 || unk_0x7C833E3C6EEE41E0() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xAAF84168D1079DB3("ID2_21_G_Night"))
				{
					unk_0xCD0B67AC78A5E986("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xC5E5B5BBBE4693F6() && !unk_0xF478777FFCC96862())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xAAF84168D1079DB3("ID2_21_G_Night"))
	{
		unk_0x53F3947D683D7E86("ID2_21_G_Night");
	}
	unk_0x52F20802944F8DCE();
}

