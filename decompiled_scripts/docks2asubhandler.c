#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xEAE0D21A50E6C7F4(uLocal_2, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uLocal_2, 0))
		{
			if (unk_0xC844350D5D58C99A(uLocal_0))
			{
				if (unk_0xDF1306B443CD3D15(uLocal_0, 0))
				{
					unk_0x73270B3C9CC833FD(uLocal_0, 0, 1);
					unk_0x1E9649458B15960F(uLocal_0, 1);
					unk_0xAA6B3A4292417750(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xC844350D5D58C99A(uLocal_1))
					{
						unk_0x73270B3C9CC833FD(uLocal_1, 0, 1);
						unk_0x1E9649458B15960F(uLocal_1, 1);
						unk_0xAA6B3A4292417750(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x5D96D8530B3D0904(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0xDF1306B443CD3D15(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1), unk_0x68F4C0EC296D3901(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x5D96D8530B3D0904(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x0A059E0DB9253280(uLocal_0))
				{
					unk_0x5D96D8530B3D0904(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x046C362CF15F1935(&uLocal_0);
	unk_0x82692E8F6A0D7A22(&uLocal_1);
	unk_0x10FAF14A60A0DBE1();
}

