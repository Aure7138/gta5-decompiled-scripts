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
	if (unk_0x82F1A060D8F4583B(joaat("wp_partyboombox")) > 1)
	{
		unk_0x921053BAF754303D();
	}
	if (unk_0xBCA819F9975BEDFA(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3291E05256869D44())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x80BC37C67CB292E5() >= 22 || unk_0x80BC37C67CB292E5() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x4C30048D7CAD04A5("ID2_21_G_Night"))
				{
					unk_0x059B8D797D20327B("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xE41614517B6436B2() && !unk_0xE9E6B5364105A000())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x4C30048D7CAD04A5("ID2_21_G_Night"))
	{
		unk_0xE6A366D0E2B7DE39("ID2_21_G_Night");
	}
	unk_0x921053BAF754303D();
}

