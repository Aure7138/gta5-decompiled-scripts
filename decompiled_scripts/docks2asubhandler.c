#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x7D9C4B359376D38A(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xC80D31E4B587871C(uLocal_2, 1))
	{
		if (!unk_0xC80D31E4B587871C(uLocal_2, 0))
		{
			if (unk_0x6ADD12BF4D6D2587(uLocal_0))
			{
				if (unk_0xB8DE76287EDC4957(uLocal_0, 0))
				{
					unk_0xDD29FF4BAB8AFF9C(uLocal_0, 0, 1);
					unk_0xEDC33A771FAEB393(uLocal_0, 1);
					unk_0xD38F266C132F2897(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x6ADD12BF4D6D2587(uLocal_1))
					{
						unk_0xDD29FF4BAB8AFF9C(uLocal_1, 0, 1);
						unk_0xEDC33A771FAEB393(uLocal_1, 1);
						unk_0xD38F266C132F2897(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x872F1C1F8587CCC7(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0xB8DE76287EDC4957(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), unk_0xB3328BA8976B416C(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x872F1C1F8587CCC7(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x841ED61760A7D07B(uLocal_0))
				{
					unk_0x872F1C1F8587CCC7(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x5380482A432E314E(&uLocal_0);
	unk_0x83E70C4C5D45C754(&uLocal_1);
	unk_0x96A3D9A8A4C7AFD4();
}

