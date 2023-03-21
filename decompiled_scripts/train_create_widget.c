#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0x955FF17089AF6072(1);
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		func_1();
	}
	unk_0x04DC0B577F5A4E24(0);
	unk_0xC6E84AA770F311E0();
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), -177f);
		unk_0xA3F41A1968319181(0);
	}
	unk_0x9016574B77A748EE(joaat("freight"));
	unk_0x9016574B77A748EE(joaat("freightcar"));
	unk_0x9016574B77A748EE(joaat("freightgrain"));
	unk_0x9016574B77A748EE(joaat("freightcont1"));
	unk_0x9016574B77A748EE(joaat("freightcont2"));
	unk_0x9016574B77A748EE(joaat("tankercar"));
	unk_0x9016574B77A748EE(joaat("metrotrain"));
	while ((((((!unk_0xEDFE27D1AEA0EA7F(joaat("freight")) || !unk_0xEDFE27D1AEA0EA7F(joaat("freightcar"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("freightgrain"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("freightcont1"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("freightcont2"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("tankercar"))) || !unk_0xEDFE27D1AEA0EA7F(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (iLocal_7)
			{
				if (unk_0x31F12808DC47A9E5(uLocal_0))
				{
					unk_0x5E36E97A590FF28B(&uLocal_0);
				}
				uLocal_0 = unk_0xCB16105FAA214329(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0x786B7DB9D026772C() };
				iLocal_9 = 0;
			}
			if (unk_0xC4B84EB67F78C1F0(uLocal_0, 0) && !unk_0x74C2FE037DFC8B4A(uLocal_0, 0))
			{
				unk_0xFF942D7335A4E7C2(uLocal_0, fLocal_5);
				unk_0x11201727167DEE16(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x04DC0B577F5A4E24(1);
	unk_0x810C5D6462DD69E6();
}

