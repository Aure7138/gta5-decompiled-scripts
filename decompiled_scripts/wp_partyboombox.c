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
	if (unk_0x7B47A371E2D93C2C(joaat("wp_partyboombox")) > 1)
	{
		unk_0xE60DEFFB2A853900();
	}
	if (unk_0xD63E63DFACCEB80E(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xB819D1DD7DA58F08())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x3E15607264E063C3() >= 22 || unk_0x3E15607264E063C3() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xCCF7BFCDA94E7211("ID2_21_G_Night"))
				{
					unk_0xCDC348CF34568A7E("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x1032ED345FD7DD26() && !unk_0x2D8FCFBC4E01FF7C())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xCCF7BFCDA94E7211("ID2_21_G_Night"))
	{
		unk_0x22B86EBD6E3AFBA7("ID2_21_G_Night");
	}
	unk_0xE60DEFFB2A853900();
}

