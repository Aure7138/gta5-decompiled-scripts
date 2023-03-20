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
	if (unk_0x25531002BCF0D968(joaat("wp_partyboombox")) > 1)
	{
		unk_0x883793591E631A3B();
	}
	if (unk_0x7547D7CF93115D6D(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3BCCCFB165E15A65())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xE76C684D1C903A71() >= 22 || unk_0xE76C684D1C903A71() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x70AE5EB0F832620B("ID2_21_G_Night"))
				{
					unk_0x601E476BBE5247E8("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x9DBF5ADC61595373() && !unk_0xA4ADA92842355D33())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x70AE5EB0F832620B("ID2_21_G_Night"))
	{
		unk_0xF5C0693050707613("ID2_21_G_Night");
	}
	unk_0x883793591E631A3B();
}

