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
	if (unk_0x09952BA662A7629B(joaat("wp_partyboombox")) > 1)
	{
		unk_0xA232817B0B36F2E5();
	}
	if (unk_0x78BF2001491914AC(18))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xC6D11983DAD48A48())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xDA870B7547A455EA() >= 22 || unk_0xDA870B7547A455EA() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xA95D829CF8762045("ID2_21_G_Night"))
				{
					unk_0x7DAA23BFC4CEE592("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xFD918707B1B07874() && !unk_0x0AFBA1AD6DC1C540())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xA95D829CF8762045("ID2_21_G_Night"))
	{
		unk_0xE9BDE28F2FC853AF("ID2_21_G_Night");
	}
	unk_0xA232817B0B36F2E5();
}

