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
	if (unk_0x16CDA1894CFE0781(joaat("wp_partyboombox")) > 1)
	{
		unk_0x82706E6C897B0FA1();
	}
	if (unk_0x2C897F101BA20806(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xFEC6476AFCF2033F())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xBE59E3811BD4FDD7() >= 22 || unk_0xBE59E3811BD4FDD7() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x81245874D8B34DB4("ID2_21_G_Night"))
				{
					unk_0x7D67AA8D7D0A6781("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xA84F80DD9F675CED() && !unk_0xB4B5BF5882A555F9())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x81245874D8B34DB4("ID2_21_G_Night"))
	{
		unk_0x5DFBD7BCDE738E3E("ID2_21_G_Night");
	}
	unk_0x82706E6C897B0FA1();
}

